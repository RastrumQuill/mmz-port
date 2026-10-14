// sub_08051084 at 0x08051084 (thumb)

undefined4 sub_08051084(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0808827C(1,param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,0x30);
    local_20 = *(int *)(param_1 + 0x4c) + (0x18 - iVar3) * 0x100;
    local_1c = sub_08008360(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    sub_0808827C(3,&local_20);
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,0x30);
    local_20 = *(int *)(param_1 + 0x4c) + (0x18 - iVar3) * 0x100;
    local_1c = sub_08008360(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    local_1c = local_1c + (uVar2 * 0x80 >> 0x17);
    sub_0808827C(3,&local_20);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (3 < bVar1) {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    DAT_02022aee = DAT_02022aee + 1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (6 < DAT_02022aee) {
    DAT_02022ae1 = DAT_02022ae1 | 0x80;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

