// sub_080DED74 at 0x080DED74 (thumb)

undefined4 sub_080DED74(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0) && (DAT_0202f5c8 != '\0')) &&
        (DAT_03003908 == param_1 + 0x74)) && (*(int *)(param_1 + 0xb4) != 0)) {
      if ((DAT_02002478 < 4) &&
         (sub_08017700(param_1,*(ushort *)(&DAT_0836e000 + (uint)DAT_02002478 * 2) | 1),
         DAT_02002478 == 3)) {
        iVar2 = sub_08017B8C(param_1);
        sub_080040A8(0xf1,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
      }
      if (DAT_02002478 == 4) {
        iVar2 = sub_08017B8C(param_1);
        sub_080040A8(0xf2,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
      }
      sub_0800471C(0x12a);
      sub_080EDB10(&DAT_02030ea0,0x60400);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    sub_080041E4(0xf1);
    sub_080041E4(0xf2);
    cVar1 = DAT_02030ea2;
    if (DAT_02030ea2 == '\0') {
      sub_08004230(0xf1);
      sub_08004230(0xf2);
      if (2 < DAT_02002478) {
        uVar3 = (uint)(*(ushort *)(&DAT_0836e000 + (uint)DAT_02002478 * 2) >> 8);
        sub_08003AB0(&DAT_085d78f8 + uVar3 * 5,
                     ((uint)(ushort)(&DAT_0202fa10)[uVar3] -
                     (uint)((ushort)(&DAT_085d78fe)[uVar3 * 10] >> 6)) * 0x20 + 0x10000);
        sub_08003E14(&DAT_085d7904 + uVar3 * 0x14,
                     ((uint)(ushort)(&DAT_0202f810)[uVar3] -
                     (uint)(byte)(&DAT_085d790b)[uVar3 * 0x14]) * 0x20 + 0x200);
      }
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836e000 + (uint)DAT_02002478 * 2));
      DAT_0202f5c8 = cVar1;
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return in_lr;
}

