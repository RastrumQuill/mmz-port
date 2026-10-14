// sub_08060FAC at 0x08060FAC (thumb)

undefined4 sub_08060FAC(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc80;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      uVar2 = 0x1e;
    }
    else {
      uVar2 = 0xe1;
    }
    *(undefined *)(param_1 + 0x13) = uVar2;
    sub_08001EE8((int)*(short *)(param_1 + 0xc0));
    *(short *)(param_1 + 0xc0) = -1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar5 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar5;
  iVar5 = *(int *)(param_1 + 0x50) + iVar5;
  *(int *)(param_1 + 0x50) = iVar5;
  cVar1 = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x1f) = cVar1;
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
  if (iVar3 < iVar5 + 0x1800) {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    local_14 = *(int *)(param_1 + 0x4c) + ((uVar4 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100;
    local_10 = sub_08008360(*(int *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x4000);
    sub_0808827C(3,&local_14);
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0xf000 < *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

