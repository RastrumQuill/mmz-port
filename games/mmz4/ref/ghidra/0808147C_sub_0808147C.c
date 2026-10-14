// sub_0808147C at 0x0808147C (thumb)

undefined4 sub_0808147C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_34 [4];
  undefined4 local_24 [4];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_34[0] = 0x1708;
    local_34[1] = 0x1708;
    local_34[2] = 0x1709;
    local_34[3] = 0x1709;
    local_24[0] = 1;
    local_24[1] = 0;
    local_24[2] = 1;
    local_24[3] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,*(undefined2 *)(local_34 + *(byte *)(param_1 + 0xb4)));
    bVar1 = *(byte *)(local_24 + *(byte *)(param_1 + 0xb4));
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar4 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
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
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

