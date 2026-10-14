// sub_080D1EA8 at 0x080D1EA8 (thumb)

undefined4 sub_080D1EA8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x2a);
    sub_080127E4(param_1,0x9903);
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
    iVar4 = uVar2 * 2 + -1;
    local_34 = *(int *)(param_1 + 0x54) + iVar4 * 0x600;
    local_30 = *(int *)(param_1 + 0x58) + -0x1e00;
    iVar3 = uVar2 * 0x10;
    sub_080B0ACC(&local_34,&DAT_08349bf0,0,iVar3);
    local_34 = *(int *)(param_1 + 0x54) + iVar4 * -0xe00;
    local_30 = *(int *)(param_1 + 0x58) + -0x2200;
    sub_080B0ACC(&local_34,&DAT_08349c0c,0,iVar3);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_34 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_30 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0xc00;
    local_24 = &DAT_0202e188;
    sub_080AC60C(1,&local_34);
    uVar2 = *local_24 * 0x343fd + 0x269ec3;
    local_34 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *local_24 = uVar2 & 0x7fffffff;
    local_30 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0xc00;
    sub_080AC60C(2,&local_34);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080032EC(0x2a);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_2c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_28 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100 + -0xc00;
    sub_080AC60C(1,&local_2c);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_2c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_28 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100 + -0xc00;
    sub_080AC60C(2,&local_2c);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_2c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_28 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100 + -0xc00;
    sub_080AC60C(2,&local_2c);
    sub_0801DD2C(5,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

