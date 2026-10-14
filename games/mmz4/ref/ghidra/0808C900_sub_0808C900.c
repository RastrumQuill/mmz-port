// sub_0808C900 at 0x0808C900 (thumb)

undefined4 sub_0808C900(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x1000;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_20 = ((*(byte *)(param_1 + 0xb9) + 1 & 1) * 2 + -1) * ((uVar2 * 2 >> 0x11 & 0x7f) + 0x180)
    ;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_1c = -((uVar2 * 2 >> 0x11 & 0x7f) + 0x380);
    sub_080D98D4(param_1 + 0x54,&local_20,0,*(undefined *)(param_1 + 0x24));
    sub_0801CF00(param_1,0x2403);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08002B10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(undefined4 *)(param_1 + 0x58);
    sub_080D0894(1,&local_28);
    sub_0808CBEC(param_1);
    sub_0802AB70(3,0,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

