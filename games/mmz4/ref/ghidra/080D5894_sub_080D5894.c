// sub_080D5894 at 0x080D5894 (thumb)

undefined4 sub_080D5894(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0x31;
    DAT_02000a5e = DAT_02000a5e | 0xe;
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined *)(param_1 + 0x75) = 0;
    *(undefined *)(param_1 + 0x76) = 0;
    *(undefined *)(param_1 + 0x7a) = 8;
    *(undefined *)(param_1 + 0x7b) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    cVar1 = *(char *)(param_1 + 0x7a) + '\x01';
    *(char *)(param_1 + 0x7a) = cVar1;
    if (cVar1 == -1) {
      uVar3 = 1;
LAB_080d591a:
      *(undefined *)(param_1 + 0x12) = uVar3;
    }
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x7a) - 1;
    *(byte *)(param_1 + 0x7a) = bVar2;
    if (bVar2 < 0x11) {
      uVar3 = 0;
      goto LAB_080d591a;
    }
  }
  pbVar5 = (byte *)(param_1 + 0x7a);
  pbVar8 = (byte *)(param_1 + 0x7b);
  bVar2 = *pbVar8;
  *pbVar8 = bVar2 + 0x81;
  iVar6 = *(int *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x54) =
       iVar6 + (int)*(short *)((int)&DAT_08128c10 + ((bVar2 + 0xc1) * 0x1000000 >> 0x17)) *
               (uint)(*pbVar5 >> 2);
  piVar7 = (int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x58) = *piVar7 + (uint)(*pbVar5 >> 2) * (int)(short)(&DAT_08128c10)[*pbVar8];
  *(uint *)(param_1 + 100) =
       iVar6 + (int)*(short *)((int)&DAT_08128c10 + ((*pbVar8 + 0x95) * 0x1000000 >> 0x17)) *
               (uint)(*pbVar5 >> 2);
  *(uint *)(param_1 + 0x68) =
       *piVar7 + (uint)(*pbVar5 >> 2) *
                 (int)*(short *)((int)&DAT_08128c10 + ((*pbVar8 + 0x55) * 0x1000000 >> 0x17));
  *(uint *)(param_1 + 0x5c) =
       iVar6 + (int)*(short *)((int)&DAT_08128c10 + ((*pbVar8 + 0xeb) * 0x1000000 >> 0x17)) *
               (uint)(*pbVar5 >> 2);
  *(uint *)(param_1 + 0x60) =
       *piVar7 + (uint)(*pbVar5 >> 2) *
                 (int)*(short *)((int)&DAT_08128c10 + ((*pbVar8 + 0xab) * 0x1000000 >> 0x17));
  switch(*(undefined *)(param_1 + 0x13)) {
  case 0:
    pbVar5 = (byte *)(param_1 + 0x74);
    uVar4 = *pbVar5 + 1;
    if (0xfe < uVar4) {
      *pbVar5 = 0xff;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      goto LAB_080d5ad8;
    }
    break;
  case 1:
    pbVar5 = (byte *)(param_1 + 0x75);
    uVar4 = *pbVar5 + 1;
    if (0xfe < uVar4) {
      *pbVar5 = 0xff;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      goto LAB_080d5ad8;
    }
    break;
  case 2:
    pbVar5 = (byte *)(param_1 + 0x76);
    uVar4 = *pbVar5 + 1;
    if (0xfe < uVar4) {
      uVar3 = 0xff;
LAB_080d5aca:
      *(undefined *)(param_1 + 0x76) = uVar3;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
LAB_080d5ad8:
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      uVar3 = sub_08128A9C((uVar4 << 1) >> 0x11,6);
      *(undefined *)(param_1 + 0x13) = uVar3;
      return in_lr;
    }
    break;
  case 3:
    pbVar5 = (byte *)(param_1 + 0x74);
    uVar4 = *pbVar5 - 1;
    if ((int)uVar4 < 1) {
      *pbVar5 = 0;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      goto LAB_080d5ad8;
    }
    break;
  case 4:
    pbVar5 = (byte *)(param_1 + 0x75);
    uVar4 = *pbVar5 - 1;
    if ((int)uVar4 < 1) {
      *pbVar5 = 0;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      goto LAB_080d5ad8;
    }
    break;
  case 5:
    pbVar5 = (byte *)(param_1 + 0x76);
    uVar4 = *pbVar5 - 1;
    if ((int)uVar4 < 1) {
      uVar3 = 0;
      goto LAB_080d5aca;
    }
    break;
  default:
    goto switchD_080d59da_caseD_6;
  }
  *pbVar5 = (byte)uVar4;
switchD_080d59da_caseD_6:
  return in_lr;
}

