// sub_08000DE0 at 0x08000DE0 (thumb)

void sub_08000DE0(int param_1)

{
  if ((&DAT_03001748)[param_1 * 0x18] != '\x01') {
    (&DAT_03001748)[param_1 * 0x18] = '\x01';
  }
  return;
}

