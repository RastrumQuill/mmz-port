// sub_0803077C at 0x0803077C (thumb)

undefined4 sub_0803077C(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xe) != '\0') || (*(char *)(param_1 + 0xfc) != '\0')) ||
     (sVar3 = *(short *)(param_1 + 0xa4), uVar2 = sub_0802B604(param_1),
     (short)(uVar2 & 0xff) <= sVar3)) {
    *(undefined2 *)(param_1 + 0x140) = 0;
    goto LAB_08030816;
  }
  puVar6 = (ushort *)(param_1 + 0x140);
  if (*(char *)(param_1 + 0x100) == '\x03') {
    *puVar6 = 0;
  }
  if ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0) {
    *puVar6 = *puVar6 + 1;
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  if (cVar1 == '\x01') {
    if (*puVar6 < 0xd3) goto LAB_08030816;
LAB_080307fa:
    DAT_0202dc30 = DAT_0202dc30 + 4;
  }
  else {
    if (cVar1 == '\x02') {
      if (*puVar6 < 0xb5) goto LAB_08030816;
      goto LAB_080307fa;
    }
    if (cVar1 == '\x03') {
      if (*puVar6 < 0x97) goto LAB_08030816;
      goto LAB_080307fa;
    }
  }
  *puVar6 = 0;
LAB_08030816:
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
  *(undefined *)(param_1 + 0x1b9) = 1;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884f9b0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar7 = (byte *)(param_1 + 0x174);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar7 * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar7 * 8,1);
  sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar7 * 8,0);
  uVar4 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar7 * 8,0);
  if ((uVar4 & 0xf) == 0) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar3 = sub_080386E0(param_1);
        iVar5 = -(int)sVar3;
      }
      else {
        sVar3 = sub_080386E0(param_1);
        iVar5 = (int)sVar3;
      }
      *(int *)(param_1 + 0x5c) = iVar5;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

