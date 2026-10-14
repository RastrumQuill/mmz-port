// sub_0808EDB0 at 0x0808EDB0 (thumb)

undefined4 sub_0808EDB0(int param_1)

{
  undefined4 in_lr;
  
  sub_08088204();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,0xe);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined2 *)(param_1 + 0x4a) = 0x80;
  *(undefined *)(param_1 + 0x1f) = 0x20;
  *(undefined2 *)(param_1 + 0x74) = 0x100;
  *(undefined2 *)(param_1 + 0x76) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808EBEC(param_1);
  return in_lr;
}

