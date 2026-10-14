// sub_08084DE8 at 0x08084DE8 (thumb)

undefined4 sub_08084DE8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
LAB_08084f86:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08085040(param_1);
    return in_lr;
  }
  if (*(byte *)(param_1 + 0xd) < 4) {
    if ((*(byte *)(param_1 + 0xd) < 3) &&
       (bVar1 = *(char *)(param_1 + 0x13) + 1, *(byte *)(param_1 + 0x13) = bVar1, (bVar1 & 7) == 0))
    {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      local_20 = ((uVar4 * 2 >> 0x11 & 7) - 4) * 0x100 + *(int *)(param_1 + 0x54);
      uVar5 = *(uint *)(param_1 + 0x60);
      uVar4 = uVar5;
      if ((uVar5 & 1) == 0) {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 7;
      }
      local_1c = *(int *)(param_1 + 0x58) + uVar4 * -0x800;
      *(uint *)(param_1 + 0x60) = uVar5 + 1 & 7;
      sub_080C13B8(&local_20,0,1,0,0);
    }
    if (*(char *)(iVar3 + 0xd) != '\v') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0x12) = 0xf0;
    }
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x31) goto switchD_08084ebe_caseD_3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_0800736C(param_1 + 0x74,&DAT_08364b7c,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 1:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x21) goto switchD_08084ebe_caseD_3;
    sub_08017700(param_1,0x620a);
    sub_08007390(param_1 + 0x74,&DAT_08364bac);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x21) goto switchD_08084ebe_caseD_3;
    sub_08017700(param_1,0x620b);
    sub_08007390(param_1 + 0x74,&DAT_08364bdc);
    break;
  default:
    goto switchD_08084ebe_caseD_3;
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_08084f86;
    goto switchD_08084ebe_caseD_3;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08084ebe_caseD_3:
  sub_080177F4(param_1);
  return in_lr;
}

