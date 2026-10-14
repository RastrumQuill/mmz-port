// sub_0803FA0C at 0x0803FA0C (thumb)

undefined4 sub_0803FA0C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_2c [2];
  int *local_24;
  undefined4 uStack_4;
  
  local_24 = local_2c;
  uStack_4 = in_lr;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08029778(param_1,0x1a);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080297C0(param_1);
    return in_lr;
  case 2:
    iVar5 = 4;
    do {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar3 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_2c[0] = ((uVar4 * 2 >> 0x11 & 0xf) + *(int *)(param_1 + 0x4c)) -
                    (uVar3 * 2 >> 0x11 & 0x1f);
      uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      uVar3 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      *(uint *)((int)local_24 + 4) =
           ((uVar4 * 2 >> 0x11 & 0xf) + *(int *)(param_1 + 0x50)) - (uVar3 * 2 >> 0x11 & 0x1f);
      sub_0808827C(1,local_2c);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08001EAC(2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0xb4;
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    sub_08015698(0x17,param_1 + 0x4c);
    break;
  default:
    goto switchD_0803fa2a_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803fa2a_caseD_6:
  return uStack_4;
}

