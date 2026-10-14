// sub_080CEFE8 at 0x080CEFE8 (thumb)

undefined4 sub_080CEFE8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    sub_080128D4(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    uVar2 = 0x40;
    goto LAB_080cf12a;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
      sub_080127E4(param_1,0x8302);
    }
    else {
      sub_080127E4(param_1,0x8102);
    }
    sub_080032EC(0x9c);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54) + 0x2000;
    *(int *)(param_1 + 0xc0) = *(int *)(*(int *)(param_1 + 0xb4) + 0x58) + -0x4000;
    uVar2 = 0x40;
    goto LAB_080cf12a;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      return in_lr;
    }
    sub_080128D4(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      DAT_0202e01e = 1;
      sub_0800860C(0x1e,0x1d,&DAT_08320e60);
    }
    DAT_0202ec44 = DAT_0202ec44 & 0xfffe;
    DAT_0202ed60 = (int *)(*(int *)(param_1 + 0xb4) + 0x54);
    sub_08022F08();
    if (((*(byte *)(param_1 + 0x10) & 2) == 0) &&
       (sub_080032EC(0x9c), (*(byte *)(param_1 + 0x10) & 2) == 0)) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0xb4);
  *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) + -0x100;
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar4 = *(int *)(iVar5 + 0x54);
  iVar6 = *(int *)(param_1 + 0xbc) - iVar4;
  if (iVar6 < 0x101) {
    if (iVar6 < -0x100) {
      iVar4 = iVar4 + -0x100;
      goto LAB_080cf0cc;
    }
  }
  else {
    iVar4 = iVar4 + 0x100;
LAB_080cf0cc:
    *(int *)(iVar5 + 0x54) = iVar4;
  }
  if (*(char *)(param_1 + 0x12) == ' ') {
    DAT_0202ed60 = (int *)(param_1 + 0xbc);
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 != '\0') {
    return in_lr;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_083499e8;
  *(undefined2 *)(param_1 + 0x26) = 1;
  sub_080032EC(0x9d);
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    sub_080127E4(param_1,0x8303);
  }
  else {
    sub_080127E4(param_1,0x8103);
  }
  uVar2 = 0x20;
LAB_080cf12a:
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

