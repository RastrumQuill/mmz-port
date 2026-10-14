// sub_08068E90 at 0x08068E90 (thumb)

undefined4 sub_08068E90(int param_1)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  puVar3 = (uint *)(*(int *)(param_1 + 0x20) + 200);
  if ((*puVar3 & 8) != 0) {
    sub_0800561C(param_1 + 0x74,&DAT_082b0c94);
  }
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((*puVar3 & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  if ((*puVar3 & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar3 & 4) != 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

