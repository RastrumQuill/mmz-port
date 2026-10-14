// sub_08085DFC at 0x08085DFC (thumb)

undefined4 sub_08085DFC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b2ed4);
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

