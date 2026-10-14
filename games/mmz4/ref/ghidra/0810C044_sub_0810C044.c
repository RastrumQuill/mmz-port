// sub_0810C044 at 0x0810C044 (thumb)

undefined4 sub_0810C044(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined2 auStack_8c [44];
  undefined auStack_34 [17];
  undefined local_23;
  undefined local_22;
  
  sub_08128B5C(auStack_8c,&DAT_08129df8,0x58);
  sub_08128BBC(auStack_34,0,0x16);
  local_23 = 1;
  local_22 = 2;
  uVar3 = (uint)*(byte *)(param_1 + 0x75);
  bVar2 = *(byte *)(param_1 + 10);
  uVar4 = bVar2 >> 4 & 1;
  if (uVar3 == 0x16) {
    *(byte *)(param_1 + 10) = bVar2 & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = bVar2 | 1;
    cVar1 = *(char *)(param_1 + 0x74);
    if (cVar1 != '\0') {
      if (cVar1 == '\x02') {
        sub_0801CDBC(param_1);
        *(char *)(param_1 + 0x4c) = (char)uVar4;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if ((bVar2 >> 4 & 1) == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x78);
        *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x7a);
        *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x76);
      }
      *(undefined *)(param_1 + 0x22) = auStack_34[uVar3];
      sub_0801CF00(param_1,auStack_8c[uVar3 * 2]);
      *(char *)(param_1 + 0x74) = '\0';
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

