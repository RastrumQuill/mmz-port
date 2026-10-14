// sub_08056C84 at 0x08056C84 (thumb)

undefined4 sub_08056C84(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08048A54(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082af964,param_1 + 0x4c,0x30);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8056829;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    puVar2 = (uint *)(*(int *)(param_1 + 0x20) + 0xbc);
    if ((*puVar2 & 0x20) != 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08055874(param_1);
    if ((*puVar2 & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if ((*puVar2 & 4) != 0) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    break;
  case 3:
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      puVar2 = (uint *)(*(int *)(param_1 + 0x20) + 0xbc);
      *puVar2 = *puVar2 & 0xffffffdf;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_08055874(param_1);
  }
  return in_lr;
}

