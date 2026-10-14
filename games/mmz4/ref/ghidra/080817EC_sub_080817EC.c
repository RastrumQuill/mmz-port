// sub_080817EC at 0x080817EC (thumb)

undefined4 sub_080817EC(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined4 local_38 [4];
  short asStack_28 [8];
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_38[0] = 0x1705;
    local_38[1] = 0x1705;
    local_38[2] = 0x1707;
    local_38[3] = 0x1707;
    sub_08128B5C(asStack_28,&DAT_081293f8,0x10);
    pbVar2 = (byte *)(param_1 + 0xb4);
    local_18 = *(int *)(param_1 + 0x54) + (int)asStack_28[(uint)*pbVar2 * 2];
    local_14 = *(int *)(param_1 + 0x58) + (int)asStack_28[(uint)*pbVar2 * 2 + 1];
    sub_080A4238(&local_18,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0801CF00(param_1,*(undefined2 *)(local_38 + *pbVar2));
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885afb0);
  }
  else {
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)(&DAT_0885b1e0 +
                          (uint)*(byte *)(param_1 + 0xb5) * 4 +
                          (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) -
                          0x1700) * 8)));
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

