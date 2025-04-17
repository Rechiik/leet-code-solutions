ListNode* newL1 = reverseList(l1);
        ListNode* newL2 =  reverseList(l2);
        ListNode* current1 = newL1;
        ListNode* current2 = newL2;
        long long num1 = 0, num2=0;
        while (current1 != NULL || current2 != NULL){
            if (current1!=NULL){
            num1 = num1*10 + current1->val;
            current1=current1->next;
            } 
            if (current2!=NULL){
            num2 = num2*10 + current2->val;
            current2=current2->next;
            }
        }
        int result = num1+num2;
        int rem =0;
        ListNode* head = new ListNode(0), *dummy = head;
        while (result>0){
            rem = result%10;
            dummy->val = rem;
            result = (int)(result/10);
            dummy->next = result>0 ?new ListNode(0):NULL;
            dummy = dummy->next;
        }
        return head;


ListNode* dummy = new ListNode(0);
ListNode* current = dummy;
int carry = 0;

        while (l1 != NULL || l2 != NULL || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            current->next = new ListNode(sum % 10);
            carry = sum / 10;
            current = current->next;
        }

        return dummy->next;
