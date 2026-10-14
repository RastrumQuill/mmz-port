// sub_08086F04 at 0x08086F04 (thumb)

undefined4 sub_08086F04(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = DAT_02030108 & 2;
    if ((DAT_02030108 & 2) == 0) {
      uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
      if (uVar3 < 0x8001) goto LAB_08086f90;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar2;
      *(uint *)(param_1 + 0x90) = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
LAB_08086f90:
    cVar1 = sub_08086D34(param_1);
    if (cVar1 == '\0') {
      sub_08086E2C(param_1);
      cVar1 = sub_08086D90(param_1);
      if (cVar1 == '\0') {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364e54 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364e74 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
  }
  return in_lr;
}

