// sub_0800AA7C at 0x0800AA7C (thumb)

undefined4 sub_0800AA7C(int param_1)

{
  short sVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    puVar2 = &DAT_02000a04 + uVar3;
    *puVar2 = (ushort)*(undefined4 *)(param_1 + 100) | 0x4047;
    *(undefined4 *)(&DAT_02000a0c + uVar3 * 2) = 0;
    *(undefined2 *)(param_1 + 0x76) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    sub_081284E4(&DAT_08b37e88,(*puVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_081284E4(&DAT_08b38690,&DAT_06000800 + (*puVar2 & 0x1f00) * 8,0x200);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar2 = (ushort *)(param_1 + 0x78);
  if (*puVar2 == 0) {
    if (*(int *)(param_1 + 0x34) < 0x11d0) {
      sVar1 = *(short *)(param_1 + 0x10);
      uVar6 = sVar1 + 1;
      *(ushort *)(param_1 + 0x10) = uVar6;
      if ((uVar6 & 0x20) != 0) {
        if (*(int *)(DAT_020359b8 + 0x58) < 0x1e000) {
          if (((ushort)(sVar1 + 1U) < 0x21) &&
             (DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039, (DAT_0203587c >> 0x10 & 1) == 0)) {
            sVar1 = sVar1 + 0x21;
LAB_0800abe8:
            *(short *)(param_1 + 0x10) = sVar1;
            goto LAB_0800abea;
          }
        }
        else if ((uVar6 < 0x201) ||
                (DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039, (DAT_0203587c >> 0x10 & 3) == 0)
                ) {
          sVar1 = *(short *)(param_1 + 0x10) + 0x20;
          goto LAB_0800abe8;
        }
        *puVar2 = 0x62;
        *(undefined2 *)(param_1 + 0x10) = 0;
      }
    }
LAB_0800abea:
    if (*puVar2 == 0) goto LAB_0800ac52;
  }
  if (*puVar2 == 0x62) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x34);
    local_20 = *(int *)(param_1 + 0x34) * 0x100 + 0x1ab00;
    local_1c = 0x22000;
    sub_080DA140(&local_20);
  }
  *puVar2 = *puVar2 + 0x62;
  iVar5 = *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x7c) - iVar5;
  if (iVar4 < 0) {
    iVar4 = iVar5 - *(int *)(param_1 + 0x7c);
  }
  if (0x300 < iVar4) {
    iVar5 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x7c) = iVar5;
  }
  if ((*(int *)(param_1 + 0x7c) - iVar5) * 0x10 + 0x2000 < (int)(uint)*puVar2) {
    *puVar2 = 0;
  }
LAB_0800ac52:
  *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 0x20;
  *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + 0x50;
  *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + 0xa0;
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 0xf0;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 400;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 0x280;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 0x620;
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 0x800;
  return in_lr;
}

