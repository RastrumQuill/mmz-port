// sub_08046DA0 at 0x08046DA0 (thumb)

undefined4 sub_08046DA0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0) || (*(short *)(param_1 + 0x8c) == 0)) &&
     (bVar1 = (byte)DAT_02022b64, (DAT_02022b64 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar1 & 0x10;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08046B54(param_1);
    return in_lr;
  }
  sub_08048780(param_1);
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (piVar3 = (int *)(param_1 + 0xdc), *piVar3 == 0))
  {
    iVar2 = sub_08015A64(0x11,param_1,&DAT_082aeac0);
    *piVar3 = iVar2;
    if (iVar2 != 0) {
      *(undefined *)(param_1 + 0xd) = 0x17;
      *(undefined *)(param_1 + 0xe) = 1;
      if (*piVar3 != 0) goto LAB_08046e60;
    }
    if ((((*(byte *)(param_1 + 0x97) & 0xf) != 0) || ((*(ushort *)(param_1 + 0x90) & 0xc00) != 0))
       && ((byte)(*(char *)(param_1 + 0xd) - 2U) < 5)) {
      *(undefined *)(param_1 + 0xd) = 0x17;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
LAB_08046e60:
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae940 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

