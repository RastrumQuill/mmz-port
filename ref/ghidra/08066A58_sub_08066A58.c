// sub_08066A58 at 0x08066A58 (thumb)

undefined4 sub_08066A58(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,10);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b0afc);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\a') {
    sub_0807D818(param_1,0,0);
    sub_08001EAC(0x7c);
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xd) != '\x02')) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

