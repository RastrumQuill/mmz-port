// sub_08092468 at 0x08092468 (thumb)

undefined4 sub_08092468(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08005784(param_1 + 0x74,&DAT_0885cf1c);
    sub_0809294C(param_1);
    sub_0801CFC8(param_1,*(undefined2 *)
                          (&DAT_0885cf76 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 (short)*(char *)(param_1 + 0x71),3);
    uVar1 = 3;
    break;
  case 1:
  case 3:
    goto switchD_0809247c_caseD_1;
  case 2:
    sub_0801CFC8(param_1,*(undefined2 *)
                          (&DAT_0885cf7a + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 (short)*(char *)(param_1 + 0x71),3);
    uVar1 = 0xf;
    break;
  case 4:
    sub_0801CFC8(param_1,*(undefined2 *)
                          (&DAT_0885cf7e + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 (short)*(char *)(param_1 + 0x71),3);
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809247c_caseD_1:
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

