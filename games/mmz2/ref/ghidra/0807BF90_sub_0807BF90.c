// sub_0807BF90 at 0x0807BF90 (thumb)

undefined4 sub_0807BF90(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) != '\0') {
      sub_080AC60C(1,param_1 + 0x54);
      goto LAB_0807c030;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar4 = uVar2 & 0x7fffffff;
    DAT_0202e188 = uVar4;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,0x18);
    local_20 = *(int *)(param_1 + 0x54) + (0xc - iVar3) * 0x100;
    uVar2 = uVar4 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,0xc);
    local_1c = *(int *)(param_1 + 0x58) + iVar3 * -0x100;
    sub_080A4558(param_1,&local_20,1,0);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
LAB_0807c030:
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

