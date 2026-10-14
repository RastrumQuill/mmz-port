// sub_080518E4 at 0x080518E4 (thumb)

undefined4 sub_080518E4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    sub_0800561C(param_1 + 0x74,&DAT_082af4a8);
    *(undefined4 *)(param_1 + 0xb0) = 0x8051661;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc6) = 0x1f;
    *(undefined *)(param_1 + 0xc4) = 0;
    *(undefined *)(param_1 + 199) = 0x7f;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0xb8);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0xbc);
  }
  sub_080516B8(param_1);
  if ((*(char *)(param_1 + 0x11) == '\x02') &&
     (cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc)),
     cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

