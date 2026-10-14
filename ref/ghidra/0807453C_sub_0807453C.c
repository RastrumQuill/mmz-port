// sub_0807453C at 0x0807453C (thumb)

undefined4 sub_0807453C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == '\0') {
          sub_0800561C(param_1 + 0x74,&DAT_082b15e4);
          sub_080033F0(param_1 + 0x6c,0);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      goto LAB_0807461a;
    }
    if (bVar1 != 0) goto LAB_0807461a;
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080033F0(param_1 + 0x6c,3);
    sub_0800561C(param_1 + 0x74,&DAT_082b1600);
    sub_08001EAC(9);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0807461a:
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
  if (cVar2 != '\0') {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  return in_lr;
}

