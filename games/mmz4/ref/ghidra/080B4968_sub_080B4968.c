// sub_080B4968 at 0x080B4968 (thumb)

undefined4 sub_080B4968(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar2 = 0x200;
    }
    else {
      sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
      if (sVar1 == 0) {
        sub_080E6B38(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
        goto LAB_080b49f0;
      }
      uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      uVar2 = 0x100;
    }
    sub_080E6B38(param_1 + 0x54,uVar2,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else {
    sub_080E6B38(param_1 + 0x54,0x300,*(byte *)(param_1 + 10) >> 4 & 1);
  }
LAB_080b49f0:
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  sub_0802AB70(0,0x2e,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

