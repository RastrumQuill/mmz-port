// sub_0808DD9C at 0x0808DD9C (thumb)

undefined4 sub_0808DD9C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xb6) & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(byte *)(*(int *)(param_1 + 100) + 10) = *(byte *)(*(int *)(param_1 + 100) + 10) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x68) + 10) = *(byte *)(*(int *)(param_1 + 0x68) + 10) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x2c) + 10) = *(byte *)(*(int *)(param_1 + 0x2c) + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(byte *)(*(int *)(param_1 + 100) + 10) = *(byte *)(*(int *)(param_1 + 100) + 10) | 1;
      *(byte *)(*(int *)(param_1 + 0x68) + 10) = *(byte *)(*(int *)(param_1 + 0x68) + 10) | 1;
      *(byte *)(*(int *)(param_1 + 0x2c) + 10) = *(byte *)(*(int *)(param_1 + 0x2c) + 10) | 1;
    }
    cVar1 = *(char *)(param_1 + 0xb8);
    if (cVar1 != *(char *)(param_1 + 0xd)) {
      *(char *)(param_1 + 0xd) = cVar1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(char *)(param_1 + 0xb8) = cVar1;
      *(undefined *)(*(int *)(param_1 + 100) + 0xd) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(*(int *)(param_1 + 100) + 0xe) = 0;
      *(undefined *)(*(int *)(param_1 + 100) + 0xf) = 0;
      *(undefined2 *)(*(int *)(param_1 + 100) + 0xba) = *(undefined2 *)(param_1 + 0xbc);
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885c570 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808E4E8(param_1);
  }
  return in_lr;
}

