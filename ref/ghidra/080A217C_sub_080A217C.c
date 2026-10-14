// sub_080A217C at 0x080A217C (thumb)

undefined4 sub_080A217C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  sub_0809C980();
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0x1000;
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    sub_08079640(local_1c,local_18,3,uVar2 * 2 >> 0x11 & 0xff);
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    sub_08079640(local_1c,local_18,4,uVar2 * 2 >> 0x11 & 0xff);
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_08001EAC(2);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0x1000;
    sub_0808827C(1,&local_1c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

