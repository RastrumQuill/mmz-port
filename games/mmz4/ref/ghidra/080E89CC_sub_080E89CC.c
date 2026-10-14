// sub_080E89CC at 0x080E89CC (thumb)

undefined4 sub_080E89CC(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
    pcVar5 = (char *)(param_1 + 0x7d);
    if (*(char *)(param_1 + 0x11) == '\x03') {
      *pcVar5 = '\0';
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x11);
    if (uVar3 == 0) {
      if (*(char *)(param_1 + 0x7c) == '\x01') {
        uVar6 = sub_080E87EC(*(undefined4 *)(param_1 + 0x28),0x200,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
      }
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = sub_08128A9C(*(undefined2 *)(param_1 + 0x74),
                           *(undefined2 *)(&DAT_08865d9a + uVar3 * 2));
      iVar4 = sub_080E87EC(uVar6,uVar3 - 1 & 0xffff | 0x100,uVar2);
      *(int *)(param_1 + 0x2c) = iVar4;
      if (iVar4 != 0) {
        *(undefined *)(iVar4 + 0x7c) = *(undefined *)(param_1 + 0x7c);
      }
    }
    if (*pcVar5 == '\0') {
      uVar1 = *(ushort *)(param_1 + 0x74);
      if (uVar1 < *(ushort *)(&DAT_08865d9a + (uint)*(byte *)(param_1 + 0x11) * 2)) {
        if (*(byte *)(param_1 + 0x11) == 0) {
          *pcVar5 = '\x01';
          sub_0801CF00(param_1,0x6700);
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        }
      }
      else {
        iVar4 = sub_08128A24(uVar1,*(ushort *)(&DAT_08865d9a + (uint)*(byte *)(param_1 + 0x11) * 2))
        ;
        sub_0801CF00(param_1,*(undefined2 *)((int)&DAT_08865d86 + ((uint)(iVar4 << 0x10) >> 0xf)));
        *pcVar5 = '\x01';
      }
    }
    else {
      iVar4 = sub_08128A24(*(ushort *)(param_1 + 0x74),
                           *(undefined2 *)(&DAT_08865d9a + (uint)*(byte *)(param_1 + 0x11) * 2));
      sub_0801CF00(param_1,*(undefined2 *)((int)&DAT_08865d86 + ((uint)(iVar4 << 0x10) >> 0xf)));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(char *)(*(int *)(param_1 + 0x2c) + 0x7d) = *pcVar5;
    }
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((3 - (uint)*(byte *)(param_1 + 0x11)) * 0xf + 0x14) * 0x100 +
         -0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080E88D0(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

