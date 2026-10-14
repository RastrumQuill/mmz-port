// sub_0806F7A0 at 0x0806F7A0 (thumb)

undefined4 sub_0806F7A0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(uint *)(param_1 + 0x90);
  uVar2 = uVar1 & 0x40;
  if ((uVar1 & 0x40) == 0) {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(uint *)(param_1 + 0x90) = uVar2;
        *(char *)(param_1 + 0x94) = (char)uVar2;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b11a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b11bc + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      if ((*(int *)(param_1 + 0x20) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) {
        *(uint *)(param_1 + 0x20) = uVar2;
        *(undefined *)(param_1 + 0xc5) = 1;
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b11a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b11bc + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    if ((*(int *)(param_1 + 0x20) != 0) && (*(byte *)(param_1 + 0x10) < 2)) {
      *(undefined *)(*(int *)(param_1 + 0x20) + 0xc5) = 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0806F89C(param_1);
  }
  return in_lr;
}

