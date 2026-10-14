// sub_0808DE64 at 0x0808DE64 (thumb)

undefined4 sub_0808DE64(int param_1)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(uint *)(param_1 + 0xb8) & 3) == 1) {
      local_14 = *(int *)(param_1 + 0x54) + 0x400 + (uint)(0 < *(int *)(param_1 + 0xbc)) * -0x800;
      local_10 = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080127E4(param_1,0x7604);
      sub_080BB98C(param_1);
      *(undefined *)(param_1 + 0x25) = 0x19;
      uVar1 = 0x18;
    }
    else {
      sub_080127E4(param_1,0x7602);
      if ((*(uint *)(param_1 + 0xb8) & 2) == 0) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = 1;
      }
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0808de7a_caseD_1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if ((cVar2 == '\0') ||
       (sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar3 != 0)) {
      local_14 = *(int *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x800;
      sub_080AC60C(1,&local_14);
      sub_080BB9D4(param_1,&local_14);
      sub_080032EC(0x2a);
      sub_0801DD2C(4,param_1 + 0x54);
      *(undefined *)(param_1 + 0xd) = 4;
    }
    sub_080128D4(param_1);
    if ((DAT_0202ebbb & 0x20) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar5 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
LAB_0808e148:
      *(undefined4 *)(param_1 + 0x14) = uVar5;
    }
switchD_0808de7a_caseD_5:
    return in_lr;
  case 1:
    goto switchD_0808de7a_caseD_1;
  case 2:
    local_14 = *(int *)(param_1 + 0x54) + 0x400 + (uint)(0 < *(int *)(param_1 + 0xbc)) * -0x800;
    local_10 = *(int *)(param_1 + 0x58) + -0x1000;
    if ((*(uint *)(param_1 + 0xb8) & 3) == 1) {
      sub_080127E4(param_1,0x760c);
      sub_080BBA3C(param_1);
      uVar1 = 0x18;
    }
    else {
      sub_080BBA88(param_1,&local_14);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) * 0xc0;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sub_0808D814(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      local_14 = *(int *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080AC60C(1,&local_14);
      sub_080032EC(0x2a);
      sub_0801DD2C(4,param_1 + 0x54);
      *(undefined *)(param_1 + 0xd) = 4;
    }
    sub_080128D4(param_1);
    if ((DAT_0202ebbb & 0x20) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_0808e148;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar5 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    goto LAB_0808e148;
  default:
    goto switchD_0808de7a_caseD_5;
  }
}

