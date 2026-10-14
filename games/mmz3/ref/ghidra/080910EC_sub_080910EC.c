// sub_080910EC at 0x080910EC (thumb)

undefined4 sub_080910EC(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x10) == '\f') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 3;
      sub_08091290(param_1);
      return in_lr;
    }
LAB_08091214:
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836617c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083661a4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0x10) != '\f') {
      *(undefined *)(param_1 + 0x4e) =
           *(undefined *)
            (*(char *)(iVar2 + 0x71) * 2 +
            *(int *)((uint)*(byte *)(iVar2 + 0x70) * 4 + *(int *)(iVar2 + 0x6c)));
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
      *(ushort *)(param_1 + 0x48) =
           *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar2 + 0x48) & 0x3ff;
      *(undefined *)(param_1 + 0x23) = *(undefined *)(iVar2 + 0x23);
    }
  }
  else {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      puVar1 = (uint *)(param_1 + 0x8c);
      if ((*puVar1 & 0x200) == 0) goto LAB_08091214;
      sub_08090DD0(param_1);
      *(uint *)(iVar2 + 0xc4) = *(uint *)(iVar2 + 0xc4) | 0x10;
      if ((*puVar1 & 0x10000) == 0) {
        sub_08090F10(param_1,9);
      }
      else if ((*puVar1 & 0x8000) == 0) {
        iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (*(int *)(param_1 + 0x58) == iVar2) {
          sub_08090F10(param_1,10);
        }
        else {
          sub_08090F10(param_1,9);
        }
      }
      else {
        sub_08090F10(param_1,0xb);
      }
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

