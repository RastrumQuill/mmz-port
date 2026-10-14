// sub_080394B8 at 0x080394B8 (thumb)

undefined4 sub_080394B8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  sbyte asStack_18 [8];
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080C8D70(asStack_18,&DAT_080c926c,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x34;
    uVar4 = (uint)(*(byte *)(param_1 + 0xda) >> 5);
    *(ushort *)(param_1 + 0xd8) =
         (ushort)(1 << asStack_18[uVar4]) | (ushort)(1 << asStack_18[uVar4 + 4 & 7]) |
         *(ushort *)(param_1 + 0xd8);
    *(undefined *)(param_1 + 0xdb) = 0;
    *(undefined *)(param_1 + 0xdc) = 2;
    *(undefined *)(param_1 + 0xdd) = 2;
    *(undefined *)(param_1 + 0xde) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x4c);
  if (*(int *)(DAT_0202286c + 0x4c) < iVar5) {
    uVar3 = 0xffffff80;
  }
  else {
    uVar3 = 0x80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  if (*(char *)(param_1 + 0xde) != '\0') {
    if (*(int *)(param_1 + 0x54) < 0) {
      if (*(int *)(param_1 + 0xb8) + -0x6800 < iVar5) {
LAB_08039570:
        *(int *)(param_1 + 0x4c) = iVar5 + *(int *)(param_1 + 0x54);
      }
    }
    else if (iVar5 < *(int *)(param_1 + 0xb8) + 0x6800) goto LAB_08039570;
    pbVar6 = (byte *)(param_1 + 0xc0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar6] * 0x10;
    *pbVar6 = *pbVar6 + 4;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_080395a4_caseD_5;
    sub_08029778(param_1,3);
    break;
  case 1:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080395a4_caseD_5;
    sub_08029778(param_1,0);
    sub_0800561C(param_1 + 0x74,&DAT_082ada78);
    break;
  case 2:
    if (*(char *)(param_1 + 0xdb) == '\0') goto switchD_080395a4_caseD_5;
    if (*(char *)(param_1 + 0xdb) == '\x02') {
      uVar2 = 6;
      goto LAB_0803965a;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ada94);
    sub_08029778(param_1,1);
    break;
  case 3:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080395a4_caseD_5;
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0x12) = 0x34;
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_080395a4_caseD_5;
    uVar2 = 8;
LAB_0803965a:
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  default:
    goto switchD_080395a4_caseD_5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080395a4_caseD_5:
  sub_080297C0(param_1);
  return in_lr;
}

