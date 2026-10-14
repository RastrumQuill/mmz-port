// sub_0808F498 at 0x0808F498 (thumb)

undefined4 sub_0808F498(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (((*(int *)(param_1 + 0xb8) == 0) && (*(int *)(param_1 + 0xbc) == 0)) &&
           (*(char *)(param_1 + 0x10) == '\0')) {
          iVar3 = sub_0808EDE0(param_1,*(undefined4 *)(param_1 + 0x54),
                               *(int *)(param_1 + 0x58) + -0x1c00,0);
          *(int *)(param_1 + 0xb8) = iVar3;
          iVar3 = sub_0808EDE0(param_1,*(undefined4 *)(param_1 + 0x54),
                               *(int *)(param_1 + 0x58) + -0x1c00,1);
          *(int *)(param_1 + 0xbc) = iVar3;
        }
        else {
          sub_0800471C(0x2d);
          sub_0808EE48(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1c00,0);
          sub_0808EE48(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1c00,1);
        }
        sub_08017700(param_1,0x7703);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x103);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0x7702);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

