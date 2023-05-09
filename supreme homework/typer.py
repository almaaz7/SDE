# from pynput.keyboard import Key, Controller, Listener
# import time
# import random

# asakey = Controller()

# time.sleep(3)

# sentence = ""
# for c in sentence:
#     asakey.press(c)
#     asakey.release(c)
#     delay = random.uniform(0,0.2)
#     time.sleep(delay)
   
import pyautogui
import time

time.sleep(5)
pyautogui.typewrite("""package q11075;

public class CountOfTwoNumbers {
	
	
	public boolean compareCountOf(int[] arr, int arg1, int arg2) {
		boolean result = false;
		int count1 =0, count2 =0;
		for(int i =0;i<arr.length;i++){
			if(arr[i] == arg1){
				count1++;
			}
			if(arr[i] == arg2){
				count2++;
			}
		}
		if(count1 > count2){
			result = true;
			return result;
		}
		else{
			result = false;
			return result;
		}
		
	}
}""", interval=0.01)
