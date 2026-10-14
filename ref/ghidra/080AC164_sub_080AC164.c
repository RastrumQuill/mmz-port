// sub_080AC164 at 0x080AC164 (thumb)

undefined8 sub_080AC164(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0202286c;
  *(undefined *)(param_1 + 0xe) = 1;
  if (DAT_02022b60 == 0xd) {
    uVar3 = 0xf04;
    goto LAB_080ac4ae;
  }
  cVar1 = *(char *)(DAT_02022b20 + 0xf);
  if (cVar1 == '\x01') {
    uVar3 = 0x200;
    goto LAB_080ac4ae;
  }
  if (cVar1 == '\x03') {
    if (DAT_02022af4 == '\0') {
      DAT_02022af4 = '\x01';
      uVar3 = 0x201;
    }
    else {
      uVar3 = 0x202;
    }
    goto LAB_080ac4ae;
  }
  if (cVar1 == '\r') {
    switch(DAT_02022af4) {
    case '\0':
      DAT_02022af4 = DAT_02022af4 + '\x01';
      uVar3 = 0x20c;
      break;
    case '\x01':
      if ((*(uint *)(DAT_02022b20 + 0x14) & 4) != 0) {
        if ((*(byte *)(iVar2 + 0x188) & 4) == 0) {
          DAT_02022af4 = '\x02';
        }
        else if ((*(byte *)(iVar2 + 0x188) & 8) == 0) {
          DAT_02022af4 = '\x05';
        }
      }
    default:
      uVar3 = 0x20d;
      break;
    case '\x02':
      goto switchD_080ac1e2_caseD_2;
    case '\x03':
      DAT_02022af4 = DAT_02022af4 + '\x01';
      uVar3 = 0x204;
      break;
    case '\x04':
switchD_080ac1e2_caseD_4:
      uVar3 = 0x205;
      break;
    case '\x05':
      goto switchD_080ac1e2_caseD_5;
    case '\x06':
      DAT_02022af4 = DAT_02022af4 + '\x01';
      uVar3 = 0x207;
      break;
    case '\a':
switchD_080ac1e2_caseD_7:
      uVar3 = 0x208;
    }
  }
  else {
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x8000) != 0) {
      if (DAT_02022af4 == '\0') {
        DAT_02022af4 = sub_080AC4B8(param_1);
      }
      switch(DAT_02022af4) {
      case '\0':
        goto switchD_080ac1e2_caseD_2;
      case '\x01':
        goto switchD_080ac2aa_caseD_1;
      case '\x02':
        goto switchD_080ac2aa_caseD_2;
      case '\x03':
        goto switchD_080ac1e2_caseD_5;
      case '\x04':
        goto switchD_080ac2aa_caseD_4;
      case '\x05':
        goto switchD_080ac2aa_caseD_5;
      case '\x06':
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x210;
        break;
      case '\a':
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x211;
        break;
      default:
        uVar3 = 0x212;
      }
      goto LAB_080ac4ae;
    }
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x4000) == 0) {
      if (DAT_02022af4 == '\0') {
        DAT_02022af4 = sub_080AC4B8(param_1);
      }
      switch(DAT_02022af4) {
      case '\0':
        goto switchD_080ac1e2_caseD_2;
      case '\x01':
        goto switchD_080ac2aa_caseD_1;
      case '\x02':
        goto switchD_080ac2aa_caseD_2;
      case '\x03':
        goto switchD_080ac1e2_caseD_5;
      case '\x04':
        goto switchD_080ac2aa_caseD_4;
      case '\x05':
        goto switchD_080ac2aa_caseD_5;
      case '\x06':
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x209;
        break;
      case '\a':
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x20a;
        break;
      default:
        uVar3 = 0x20b;
      }
    }
    else {
      if (DAT_02022af4 == '\0') {
        DAT_02022af4 = sub_080AC4B8(param_1);
      }
      switch(DAT_02022af4) {
      case '\0':
switchD_080ac1e2_caseD_2:
        sub_0801C488(iVar2,2);
        *(undefined2 *)(param_1 + 0xc4) = 0x101;
        *(undefined *)(param_1 + 0xe) = 2;
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x203;
        break;
      case '\x01':
switchD_080ac2aa_caseD_1:
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x204;
        break;
      case '\x02':
switchD_080ac2aa_caseD_2:
        DAT_02022af4 = '\x06';
        goto switchD_080ac1e2_caseD_4;
      case '\x03':
switchD_080ac1e2_caseD_5:
        sub_0801C488(iVar2,3);
        *(undefined2 *)(param_1 + 0xc4) = 0x102;
        *(undefined *)(param_1 + 0xe) = 2;
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x206;
        break;
      case '\x04':
switchD_080ac2aa_caseD_4:
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x207;
        break;
      case '\x05':
switchD_080ac2aa_caseD_5:
        DAT_02022af4 = DAT_02022af4 + '\x01';
        goto switchD_080ac1e2_caseD_7;
      case '\x06':
        DAT_02022af4 = DAT_02022af4 + '\x01';
        uVar3 = 0x20e;
        break;
      default:
        uVar3 = 0x20f;
      }
    }
  }
LAB_080ac4ae:
  return CONCAT44(in_lr,uVar3);
}

