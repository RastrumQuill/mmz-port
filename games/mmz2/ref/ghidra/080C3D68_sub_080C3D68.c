// sub_080C3D68 at 0x080C3D68 (thumb)

undefined4 sub_080C3D68(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc403);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc404);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc405);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xf;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc402);
    sub_080C2270(param_1,0x35);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 5:
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    iVar5 = *(int *)(param_1 + 0x54) + -0x100;
    *(int *)(param_1 + 0x54) = iVar5;
    if (*(int *)(DAT_0202e130 + 0x54) + 0x2000 < iVar5) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 6:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 2) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfd;
    sub_080127E4(param_1,0xc406);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 7:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 2) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfd;
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 8:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc401);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 9:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 2) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfd;
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 10:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc406);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 0xb:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_080E0E64(&DAT_0202f8e0,0x40400);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 0xc:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 2) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfd;
    sub_080127E4(param_1,0xc400);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348ce8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 0xd:
    sub_080128D4(param_1);
    uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x1000 < uVar4) {
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
    if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
      return in_lr;
    }
    if (DAT_0202e138 == '\0') {
      return in_lr;
    }
    if (DAT_03003908 != param_1 + 0x74) {
      return in_lr;
    }
    bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_080E0E64(&DAT_0202f8e0,0x30400);
    sub_080127E4(param_1,0xc406);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 0xe:
    sub_080128D4(param_1);
    if (DAT_0202f8e2 != '\0') {
      return in_lr;
    }
    DAT_0202e138 = DAT_0202f8e2;
    sub_080127E4(param_1,0xc400);
    cVar2 = '\r';
    break;
  default:
    goto switchD_080c3d7c_caseD_f;
  }
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080c3d7c_caseD_f:
  return in_lr;
}

