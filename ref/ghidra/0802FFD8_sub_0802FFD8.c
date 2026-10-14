// sub_0802FFD8 at 0x0802FFD8 (thumb)

undefined4 sub_0802FFD8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    uVar5 = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 10) = (char)uVar5;
    uVar5 = uVar5 >> 4 & 1;
    bVar1 = *(byte *)(param_1 + 0xc3);
    iVar4 = param_1 + 0x4c;
    sub_080908CC(iVar4,uVar5,0,~bVar1 & 1);
    sub_080908CC(iVar4,uVar5,1,~(bVar1 >> 1) & 1);
    sub_080908CC(iVar4,uVar5,2,~(bVar1 >> 2) & 1);
    sub_080908CC(iVar4,uVar5,3,0);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
    break;
  case 2:
    sub_08029778(param_1,0x18);
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar4 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    sub_0802E674(param_1);
    break;
  case 4:
    goto switchD_0802fff2_caseD_4;
  case 5:
    uVar3 = sub_08099F90(param_1,&DAT_082ad2e0);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022b6e = DAT_02022b6e | 2;
      sub_08015698(0x15,param_1 + 0x4c);
switchD_0802fff2_caseD_4:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_0802fff2_caseD_7;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
switchD_0802fff2_caseD_7:
  return in_lr;
}

