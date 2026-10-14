// sub_080F3784 at 0x080F3784 (thumb)

undefined8 sub_080F3784(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = (byte)DAT_02002134;
  if ((DAT_02002134 & 2) == 0) {
    if ((DAT_02002134 & 0x200) == 0) {
      if ((DAT_02002134 & 0x100) == 0) {
        uVar2 = 0;
        goto LAB_080f380a;
      }
      *(byte *)(param_1 + 0xe19) = *(char *)(param_1 + 0xe18) + 1U & 3;
      *(undefined *)(param_1 + 2) = 0;
    }
    else {
      *(byte *)(param_1 + 0xe19) = *(char *)(param_1 + 0xe18) + 3U & 3;
      *(byte *)(param_1 + 2) = bVar1 & 2;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838b9a8 + (uint)*(byte *)(param_1 + 0xe19) * 4));
    sub_0800471C(0x33);
  }
  else {
    *(undefined *)(param_1 + 1) = 3;
    *(undefined *)(param_1 + 2) = 3;
  }
  uVar2 = 1;
LAB_080f380a:
  return CONCAT44(in_lr,uVar2);
}

