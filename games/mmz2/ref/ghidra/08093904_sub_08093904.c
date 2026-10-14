// sub_08093904 at 0x08093904 (thumb)

undefined4 sub_08093904(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08342a14);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    iVar3 = sub_08065A68(*(undefined *)(param_1 + 0x11));
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x54);
      *(int *)(param_1 + 0x54) = iVar5;
      pbVar4 = (byte *)(param_1 + 0xbe);
      if (*pbVar4 == 0) {
        *(int *)(param_1 + 0x54) = iVar5 + -0x1800;
        iVar5 = iVar5 + -0x1800 + (uint)(byte)(&DAT_08342a7d)[*pbVar4] * -0x100;
      }
      else {
        *(int *)(param_1 + 0x54) = iVar5 + 0x1800;
        iVar5 = iVar5 + 0x1800 + (uint)(byte)(&DAT_08342a7d)[*pbVar4] * 0x100;
      }
      *(int *)(param_1 + 0x54) = iVar5;
      *pbVar4 = *pbVar4 + 1 & 7;
      *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1000;
      iVar3 = sub_08009240(*(undefined4 *)(param_1 + 0x54));
      if (iVar3 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

