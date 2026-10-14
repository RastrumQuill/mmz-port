// sub_08069740 at 0x08069740 (thumb)

undefined8 sub_08069740(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar2 = 0;
    goto LAB_0806979e;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    uVar1 = 3;
LAB_08069790:
    *(char *)(param_1 + 0xd) = (char)uVar1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x8c);
    if ((uVar1 & 0x10000) != 0) {
      uVar1 = 1;
      goto LAB_08069790;
    }
    uVar1 = uVar1 & 0x20000;
    if (uVar1 == 0) goto LAB_08069790;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  sub_08069A80(param_1);
  uVar2 = 1;
LAB_0806979e:
  return CONCAT44(in_lr,uVar2);
}

