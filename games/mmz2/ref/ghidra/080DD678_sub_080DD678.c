// sub_080DD678 at 0x080DD678 (thumb)

undefined8 sub_080DD678(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (((*(char *)(*(int *)(param_1 + 0x28) + 2) == '\x01') && (param_3 - 1 < 0x51)) &&
     ((((int)(uint)*(byte *)(param_2 + 0x233 + (param_3 >> 3)) >> (param_3 & 7) & 1U) == 0 ||
      (cVar1 = sub_080D5A34(param_2,param_3), cVar1 != '\0')))) {
    uVar2 = 0xcb00;
    if (param_3 != param_4) {
      sub_080127E4(param_1,0xcb00);
    }
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

