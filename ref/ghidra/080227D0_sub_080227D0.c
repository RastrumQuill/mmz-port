// sub_080227D0 at 0x080227D0 (thumb)

undefined4 sub_080227D0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_0801B50C(param_1,3);
  if ((bVar1 & *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130)) == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_08018C20(param_1,0x89,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x121) = 4;
  }
  return in_lr;
}

