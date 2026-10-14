// sub_080369CC at 0x080369CC (thumb)

undefined8 sub_080369CC(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x178) < 3) {
    if ((param_2 & 0x8000) != 0) {
LAB_08036a06:
      uVar1 = 0;
      goto LAB_08036a08;
    }
  }
  else if ((((4 < *(byte *)(param_1 + 0x178)) || ((param_2 & 0x400) != 0)) ||
           ((param_2 & 0xffffff7f) == 0xf)) || ((param_2 & 0xffffff7f) == 0xe)) goto LAB_08036a06;
  uVar1 = 1;
LAB_08036a08:
  return CONCAT44(in_lr,uVar1);
}

