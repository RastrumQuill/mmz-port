// sub_0807532C at 0x0807532C (thumb)

undefined4 sub_0807532C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (((*(uint *)(param_1 + 0x8c) & 0x204) != 0) || (1 < *(byte *)(iVar4 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080750F4(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(uint *)(param_1 + 0x54) =
           *(int *)(iVar4 + 0x54) + (uint)*(byte *)(param_1 + 0x12) * 0x200 + 0xd00;
      uVar3 = 0xc0;
    }
    else {
      *(uint *)(param_1 + 0x54) =
           *(int *)(iVar4 + 0x54) - ((uint)*(byte *)(param_1 + 0x12) * 0x200 + 0xd00);
      uVar3 = 0xffffff40;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x1b00;
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0xe) {
      return in_lr;
    }
LAB_08075408:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(int *)(param_1 + 0x60) < 0x700) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar4 <= *(int *)(DAT_0202e130 + 0x58) + -0x1800) {
      return in_lr;
    }
    sub_080127E4(param_1,0x320a);
    sub_080128D4(param_1);
    sub_080032EC(0xf4);
    *(undefined *)(param_1 + 0x12) = 0xff;
    goto LAB_08075408;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x5c) < -0x3ff) goto LAB_0807544a;
    iVar4 = *(int *)(param_1 + 0x5c) + -0x80;
  }
  else {
    if (0x3ff < *(int *)(param_1 + 0x5c)) goto LAB_0807544a;
    iVar4 = *(int *)(param_1 + 0x5c) + 0x80;
  }
  *(int *)(param_1 + 0x5c) = iVar4;
LAB_0807544a:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != -1) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

