// sub_080CAFF8 at 0x080CAFF8 (thumb)

undefined4 sub_080CAFF8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    local_20 = *(int *)(param_1 + 0x54) + -0x2500;
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,6);
    local_1c = *(int *)(param_1 + 0x58) + iVar3 * 0x100 + 0x600;
    sub_080AC60C(1,&local_20);
    local_20 = *(int *)(param_1 + 0x54) + -0x1200;
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,6);
    local_1c = *(int *)(param_1 + 0x58) + iVar3 * 0x100 + 0x600;
    sub_080AC60C(1,&local_20);
    local_20 = *(int *)(param_1 + 0x54);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,6);
    local_1c = *(int *)(param_1 + 0x58) + iVar3 * 0x100 + 0x600;
    sub_080AC60C(1,&local_20);
    local_20 = *(int *)(param_1 + 0x54) + 0x1200;
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,6);
    local_1c = *(int *)(param_1 + 0x58) + iVar3 * 0x100 + 0x600;
    sub_080AC60C(1,&local_20);
    local_20 = *(int *)(param_1 + 0x54) + 0x2500;
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,6);
    local_1c = *(int *)(param_1 + 0x58) + iVar3 * 0x100 + 0x600;
    sub_080AC60C(1,&local_20);
    sub_080032EC(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

