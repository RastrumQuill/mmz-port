// sub_0800F2A0 at 0x0800F2A0 (thumb)

undefined4 sub_0800F2A0(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  puVar5 = (ushort *)(param_1 + 0x6e);
  *(ushort *)(param_1 + 0x6c) = *puVar5;
  *puVar5 = (ushort)((uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x44)) >> 8);
  iVar3 = (uint)*puVar5 - (uint)*(ushort *)(param_1 + 0x6c);
  if (iVar3 < -0x100) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x30;
  }
  else if (0x100 < iVar3) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x30;
  }
  uVar6 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
  (&DAT_02000a0c)[uVar6 * 2] = *(short *)(param_1 + 0x6e) + (short)*(undefined4 *)(param_1 + 0x4c);
  (&DAT_02000a0e)[uVar6 * 2] =
       (ushort)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  uVar1 = (&DAT_02000a0e)[uVar6 * 2];
  bVar2 = *(byte *)(param_1 + 0x68);
  if (bVar2 == 1) {
    if (uVar1 < 0x304) {
      sub_081284E4(&DAT_08b49f40,((ushort)(&DAT_02000a04)[uVar6] & 0x1f00) * 8 + 0x6000000,0x200);
      bVar2 = 0;
      goto LAB_0800f494;
    }
    if (uVar1 < 0x409) {
      return in_lr;
    }
    puVar4 = &DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar6] & 0x1f00) * 8;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        return in_lr;
      }
      if (uVar1 < 0x309) {
        return in_lr;
      }
      sub_081284E4(&DAT_08b48728,((ushort)(&DAT_02000a04)[uVar6] & 0x1f00) * 8 + 0x6000000,0x200);
      bVar2 = 1;
      goto LAB_0800f494;
    }
    if (bVar2 == 2) {
      if (uVar1 < 0x404) {
        sub_081284E4(&DAT_08b48728,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar6] & 0x1f00) * 8,
                     0x200);
        bVar2 = 1;
      }
      else {
        if (uVar1 < 0x509) {
          return in_lr;
        }
        sub_081284E4(&DAT_08b49738,((ushort)(&DAT_02000a04)[uVar6] & 0x1f00) * 8 + 0x6000000,0x200);
        bVar2 = 3;
      }
      goto LAB_0800f494;
    }
    if (bVar2 != 3) {
      return in_lr;
    }
    if (0x503 < uVar1) {
      return in_lr;
    }
    puVar4 = (undefined *)(((ushort)(&DAT_02000a04)[uVar6] & 0x1f00) * 8 + 0x6000000);
  }
  sub_081284E4(&DAT_08b48f30,puVar4,0x200);
  bVar2 = 2;
LAB_0800f494:
  *(byte *)(param_1 + 0x68) = bVar2;
  return in_lr;
}

