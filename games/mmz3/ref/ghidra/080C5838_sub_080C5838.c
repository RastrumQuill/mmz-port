// sub_080C5838 at 0x080C5838 (thumb)

undefined8 sub_080C5838(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_24;
  
  sub_0800393C(&DAT_085d88e8,(DAT_0202fba8 - 0x3e4) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d88f4,(DAT_0202f9a8 - 7) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8924,(DAT_0202fbae - 0x2a4) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8930,(DAT_0202f9ae - 7) * 0x20 + 0x200);
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x47;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c5a7d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  if ((DAT_02030105 & 8) == 0) {
    local_24 = 4;
    uVar6 = 0;
    iVar5 = 0x1004;
    iVar4 = 0x19a;
  }
  else {
    if ((DAT_02030105 & 0x80) == 0) {
      local_24 = 3;
      uVar6 = 4;
    }
    else {
      if ((DAT_02030106 & 1) != 0) {
        local_24 = 4;
        uVar6 = 8;
        sub_0800393C(&DAT_085d8938,(DAT_0202fbb0 - 0x2e4) * 0x20 + 0x10000);
        sub_08003E14(&DAT_085d8944,(DAT_0202f9b0 - 8) * 0x20 + 0x200);
        goto LAB_080c59ea;
      }
      local_24 = 1;
      uVar6 = 7;
    }
    iVar5 = 0x1018;
    iVar4 = 0x19c;
  }
  sub_0800393C((int)&DAT_085d78f8 + iVar5,
               ((uint)*(ushort *)((int)&DAT_0202fa10 + iVar4) -
               (uint)(*(ushort *)((int)&DAT_085d78fe + iVar5) >> 6)) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904 + iVar5,
               ((uint)*(ushort *)((int)&DAT_0202f810 + iVar4) - (uint)(byte)(&DAT_085d790b)[iVar5])
               * 0x20 + 0x200);
LAB_080c59ea:
  uVar2 = (short)uVar6 + local_24;
  if (uVar6 < uVar2) {
    do {
      iVar4 = sub_0800710C(DAT_0203062c);
      if (iVar4 != 0) {
        *(undefined *)(iVar4 + 0x25) = 1;
        *(undefined *)(iVar4 + 9) = 0x47;
        *(undefined4 *)(iVar4 + 0x14) = 0x80c5a7d;
        *(undefined2 *)(iVar4 + 0x20) = 0;
        *(undefined *)(iVar4 + 0x22) = 0;
        *(undefined *)(iVar4 + 0x10) = 1;
        *(char *)(iVar4 + 0x11) = (char)uVar6;
        *(int *)(iVar4 + 0x28) = iVar1;
      }
      uVar3 = uVar6 * 0x10000 + 0x10000;
      uVar6 = uVar3 >> 0x10;
    } while ((int)uVar3 >> 0x10 < (int)uVar2);
  }
  return CONCAT44(in_lr,iVar1);
}

