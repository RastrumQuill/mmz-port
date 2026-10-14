// sub_08017A44 at 0x08017A44 (thumb)

undefined8 sub_08017A44(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  pbVar3 = &DAT_082a8120 + (uint)*(byte *)(param_1 + 0xbc) * 6;
  if (*(byte *)(param_1 + 0xc3) != *pbVar3) {
    do {
      pbVar3 = pbVar3 + 1;
      iVar6 = iVar6 + 1;
    } while ((uint)*(byte *)(param_1 + 0xc3) != (int)(char)*pbVar3);
  }
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  cVar2 = (&DAT_082a8120)[iVar6 + uVar5 * 6];
  if (cVar2 < 0) {
    uVar4 = 1;
  }
  else {
    uVar1 = *(undefined *)(param_1 + 0xc2);
    if ((uVar5 == 0) && (*(char *)(param_1 + 0xe) != '\0')) {
      *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = (ushort)*(byte *)(param_1 + 0xd);
    }
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 3;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = uVar1;
    *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc0);
    *(char *)(param_1 + 0xc0) = cVar2;
    sub_08018C20(param_1,(uint)(byte)(&DAT_082a8138)[uVar5] +
                         ((uint)*(byte *)(param_1 + 0x115) -
                          (uint)(byte)(&DAT_082a8138)[*(byte *)(param_1 + 0xbc)] & 1) + cVar2 * 6 +
                         (uint)*(byte *)(param_1 + 0x11f) * 2,(int)*(char *)(param_1 + 0x71),
                 (int)*(char *)(param_1 + 0x72));
    uVar4 = 3;
  }
  return CONCAT44(in_lr,uVar4);
}

