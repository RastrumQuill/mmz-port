// sub_08050AD4 at 0x08050AD4 (thumb)

undefined4 sub_08050AD4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffff7;
        sub_08017700(param_1,0xaf01);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_08050148(param_1);
      sub_080177F4(param_1);
      if ((*(uint *)(param_1 + 0xc0) & 0x10) != 0) {
        return in_lr;
      }
      iVar4 = (int)*(short *)(param_1 + 0xd0);
      if (iVar4 != -1) {
        sub_08004768(iVar4);
        *(short *)(param_1 + 0xd0) = -1;
      }
      cVar2 = '\x01';
      *(undefined *)(param_1 + 0xd) = 1;
      goto LAB_08050b8c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar3 = sub_0800471C(0x54);
    *(undefined2 *)(param_1 + 0xd0) = uVar3;
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x18;
    sub_08017700(param_1,0xaf02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08050b8c:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

