// sub_080A50FC at 0x080A50FC (thumb)

undefined4 sub_080A50FC(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  short asStack_54 [16];
  int local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 uStack_4;
  
  sub_08128B5C(asStack_54,&DAT_0812966c,0x20);
  iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar4 = *(int *)(DAT_0202dbf0 + 0x58);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = (uVar1 * 2 >> 0x11 & 1) + 5;
  uStack_4 = in_lr;
  if (uVar1 != 0) {
    local_24 = local_34;
    do {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_34[0] = asStack_54[(uVar1 & 7) * 2] + iVar3 + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      local_24[1] = asStack_54[(uVar1 & 7) * 2 + 1] + iVar4 + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
      local_2c = 0;
      local_28 = 0xffffff00;
      sub_080D97A8(local_24,&local_2c,0,0);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uStack_4;
}

