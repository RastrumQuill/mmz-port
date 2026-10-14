// sub_08062C20 at 0x08062C20 (thumb)

undefined4 sub_08062C20(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    bVar1 = *(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xbc) * 2 + 0xf000 >> 1;
    *(bool *)(param_1 + 0x12) = bVar1;
    if (bVar1) {
      uVar4 = *(uint *)(param_1 + 0xb4) | 0x1000;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xb4) & 0xffffefff;
    }
    *(uint *)(param_1 + 0xb4) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x200;
    *(uint *)(param_1 + 100) =
         *(int *)(param_1 + 0x54) + 0x600 + (uint)*(byte *)(param_1 + 0x10) * -0xc00;
    *(uint *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) + 0x1000 + (uint)*(byte *)(param_1 + 0x12) * -0x2000;
    *(undefined *)(param_1 + 0x13) = 0x19;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08062c34_caseD_2:
    iVar3 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 4);
    iVar3 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 4);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\f') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        uVar4 = *(uint *)(param_1 + 0xb4);
        uVar5 = 0x400;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xb4);
        uVar5 = 0x800;
      }
      *(uint *)(param_1 + 0xb4) = uVar4 | uVar5;
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08062e9c:
      *(char *)(param_1 + 0xe) = cVar2;
    }
    break;
  case 2:
    goto switchD_08062c34_caseD_2;
  case 3:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffff3ff;
    *(uint *)(param_1 + 100) =
         *(int *)(param_1 + 100) + -0x600 + (uint)*(byte *)(param_1 + 0x10) * 0xc00;
    *(uint *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x68) + -0x3400 + (uint)*(byte *)(param_1 + 0x12) * 0x6800;
    *(undefined *)(param_1 + 0x13) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    iVar3 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 4);
    iVar3 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 4);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\f') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        uVar4 = *(uint *)(param_1 + 0xb4);
        uVar5 = 0x800;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xb4);
        uVar5 = 0x400;
      }
      *(uint *)(param_1 + 0xb4) = uVar4 | uVar5;
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08062e9c;
    }
    break;
  case 5:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffff3ff;
    *(uint *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x68) + 0x300 + (uint)*(byte *)(param_1 + 0x12) * -0x600;
    *(undefined *)(param_1 + 0x13) = 0x19;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    iVar3 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x18;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar3 = (iVar6 - *(int *)(param_1 + 0x58)) * 0x18;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x58) = iVar6;
      if (*(char *)(param_1 + 0x12) == '\0') {
        if (*(int *)(param_1 + 0xbc) + 0x2200 <= iVar6) goto LAB_08062e9a;
        cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (*(int *)(param_1 + 0xbc) + 0xce00 < iVar6) {
        cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
LAB_08062e9a:
        cVar2 = '\x01';
      }
      goto LAB_08062e9c;
    }
    break;
  case 7:
    *(undefined *)(param_1 + 0x13) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffdef;
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080128D4(param_1);
  default:
    goto switchD_08062c34_caseD_9;
  }
  sub_080128D4(param_1);
switchD_08062c34_caseD_9:
  return in_lr;
}

