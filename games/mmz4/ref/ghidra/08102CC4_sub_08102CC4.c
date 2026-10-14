// sub_08102CC4 at 0x08102CC4 (thumb)

undefined4 sub_08102CC4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  uVar3 = sub_08128A24(*(undefined *)(param_1 + 0xb5),0x18);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sVar4 = (ushort)*(byte *)(param_1 + 0xb4) + (uVar3 & 0xff);
  }
  else {
    sVar4 = (ushort)*(byte *)(param_1 + 0xb4) - (uVar3 & 0xff);
  }
  pbVar6 = (byte *)(param_1 + 0xb4);
  iVar7 = (int)sVar4;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  iVar5 = iVar7;
  if (iVar7 < 0) {
    iVar5 = iVar7 + 3;
  }
  *pbVar6 = (&DAT_08868838)[iVar7 + (iVar5 >> 2) * -4 + (uint)*(byte *)(param_1 + 0x10) * 4];
  pbVar8 = (byte *)(param_1 + 0xb5);
  bVar1 = sub_08128A9C(*pbVar8,0x18);
  *pbVar8 = bVar1;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      sub_0801CFC8(param_1,*(undefined2 *)(&DAT_088687c0 + (uint)*pbVar6 * 4),0,*pbVar8 + 1);
    }
    else {
      sub_0801CFC8(param_1,*(undefined2 *)(&DAT_088687c0 + (uint)*pbVar6 * 4),1,*pbVar8 - 1);
    }
    cVar2 = '\x01';
  }
  else if (bVar1 < 0x15) {
    *pbVar8 = bVar1 - 4;
    bVar1 = *pbVar8 >> 1;
    if (3 < bVar1) {
      bVar1 = bVar1 & 3;
    }
    sub_0801CFC8(param_1,*(undefined2 *)(&DAT_088687c0 + (uint)*pbVar6 * 4),bVar1 + 2,
                 (*pbVar8 & 1) + 1);
    *(byte *)(param_1 + 0x12) = '\x11' - *pbVar8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&UNK_088687d0 + (uint)*pbVar6 * 0x18,param_1 + 0x54,0x80);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0xe) = 2;
    if (*(char *)(param_1 + 0x12) != '\0') goto LAB_08102e92;
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088687c2 + (uint)*pbVar6 * 4));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0xff;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *pbVar8 = bVar1 - 0x15;
    if ((byte)(bVar1 - 0x15) < 2) {
      sub_0801CFC8(param_1,*(undefined2 *)(&DAT_088687c2 + (uint)*pbVar6 * 4),0,*pbVar8 + 1);
    }
    else {
      sub_0801CFC8(param_1,*(undefined2 *)(&DAT_088687c2 + (uint)*pbVar6 * 4),0,1);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0xff;
    cVar2 = '\x03';
  }
  *(char *)(param_1 + 0xe) = cVar2;
LAB_08102e92:
  *pbVar8 = 0;
  return in_lr;
}

